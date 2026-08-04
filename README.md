Microcontroller-Based Robotic Car Controller (8051)

A firmware-driven vehicle control system built on an AT89C51 microcontroller that translates manual user button inputs into multi-directional drive operations using an L293D motor driver in Proteus simulation.

System Capabilities:
Decodes user push-button signals to execute four distinct motion routines: Forward, Backward, Left, and Right.
Drives four 12V DC motors using dual H-bridge channels on an L293D motor driver IC.
Implements directional control firmware in Embedded C to synchronize motor polarity for smooth maneuvering.
Isolate motor power circuitry from microcontroller logic using dedicated power supply rails.

Hardware Components:
Microcontroller: AT89C51 (8051 architecture)
Motor Driver: L293D H-Bridge Driver IC
Actuators: 4x DC Motors
Inputs: 4x Push Buttons (Directional Control)
Power Supply: Dual 5V (Microcontroller) / 9V–12V (Motors) DC

Software & Tools:
Programming Language: Embedded C
Toolchain / IDE: Keil MicroVision 5
Simulation Platform: Proteus VSM
