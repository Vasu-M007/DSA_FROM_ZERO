import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

def orbital_trajectory(a, e, n_points=360):
    """
    Generate orbital trajectory coordinates.
    The focus of the orbit (the central body) is at the origin (0, 0).
    """
    theta = np.linspace(0, 2 * np.pi, n_points)
    r = a * (1 - e**2) / (1 + e * np.cos(theta))
    
    x = r * np.cos(theta)
    y = r * np.sin(theta)
    
    return x, y

# --- Simulation Parameters ---
n_points = 360  # Number of points in the full orbit path
animation_speed = 2  # Controls how fast the animation runs

# Define the properties for the four orbits
orbits_properties = [
    (1.0, 0.0, "Circle (e=0)"),
    (1.0, 0.3, "Ellipse (e=0.3)"),
    (1.0, 0.6, "Ellipse (e=0.6)"),
    (1.0, 0.9, "Highly Elliptical (e=0.9)")
]

# --- Set up the plot ---
fig, axes = plt.subplots(2, 2, figsize=(12, 10))
fig.suptitle('Live Simulation of Different Orbital Trajectories', fontsize=16)

# Lists to store the data and animated objects for each subplot
planets = []
trajectories = []

# Configure each subplot
for ax, (a, e, title) in zip(axes.flatten(), orbits_properties):
    # Pre-calculate the full orbital path for this subplot
    orbit_x, orbit_y = orbital_trajectory(a, e, n_points)
    trajectories.append((orbit_x, orbit_y))
    
    # Set plot properties
    ax.set_aspect('equal')
    ax.grid(True, linestyle='--', alpha=0.5)
    ax.set_title(title)
    ax.set_xlabel('x-axis')
    ax.set_ylabel('y-axis')
    
    # Plot the static elements
    ax.plot(orbit_x, orbit_y, 'b--', linewidth=1, label='Orbital Path') # The full path
    ax.plot(0, 0, 'yo', markersize=15, label='Central Body') # The central star/planet
    
    # Initialize the animated planet object for this subplot and add it to our list
    planet, = ax.plot([], [], 'ro', markersize=8, label='Orbiting Body')
    planets.append(planet)
    
    # Set axis limits to ensure the whole orbit is visible
    ax.set_xlim(-a * (1 + e) - 0.2, a * (1 + e) + 0.2)
    ax.set_ylim(-a * (1 + e) - 0.2, a * (1 + e) + 0.2)
    ax.legend(loc='upper right', fontsize=8)


# --- Animation Functions ---

def init():
    """Initializes the animation's plot elements."""
    for planet in planets:
        planet.set_data([], [])
    # Return an iterable of all the animated artists
    return planets

def update(frame):
    """This function is called for each frame of the animation."""
    # Calculate the current position index for the orbiting bodies
    current_index = int(frame * animation_speed) % n_points
    
    # Update the position of each planet
    for i, planet in enumerate(planets):
        # Get the pre-calculated trajectory for this planet
        orbit_x, orbit_y = trajectories[i]
        
        # Get the coordinates for the current frame
        x_pos = orbit_x[current_index]
        y_pos = orbit_y[current_index]
        
        # Update the planet's position on its plot
        planet.set_data(x_pos, y_pos)
        
    # Return an iterable of all the updated artists
    return planets


# --- Create and run the animation ---

# Create the animation object.
ani = FuncAnimation(fig, update, frames=n_points // animation_speed,
                    init_func=init, blit=True, interval=20)

plt.tight_layout(rect=[0, 0.03, 1, 0.95])
plt.show()