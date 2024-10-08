<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    
 
</head>
<body>

<h1>Arduino-Based Temperature and Gas Monitoring System</h1>

<h2>📖 Introduction</h2>
<p>This project involves the design and implementation of a monitoring system using an <strong>Arduino Uno</strong>, incorporating a red LED, a green LED, a buzzer, an LM35 temperature sensor, and an MQ-2 gas sensor. The system is designed to monitor environmental conditions and provide visual and auditory alerts when thresholds for temperature and gas levels are exceeded.</p>

<h2>⚙️ Components Used</h2>
<ul>
    <li><strong>Arduino Uno</strong>: Microcontroller for processing.</li>
    <li><strong>Red LED</strong>: Indicates alarm status.</li>
    <li><strong>Green LED</strong>: Indicates normal operation.</li>
    <li><strong>Buzzer</strong>: Provides auditory alerts.</li>
    <li><strong>LM35 Temperature Sensor</strong>: Measures ambient temperature.</li>
    <li><strong>MQ-2 Gas Sensor</strong>: Detects the presence of various gases (e.g., LPG, smoke).</li>
</ul>

<h2>📋 Functional Requirements</h2>

<h3>Normal Operation</h3>
<p>The green LED should remain lit during normal conditions, indicating that both temperature and gas levels are within safe thresholds.</p>

<h3>Alarm Activation</h3>
<p>The red LED should turn on, and the buzzer should activate if:</p>
<ul>
    <li>The temperature measured by the LM35 exceeds <strong>60°C</strong>.</li>
    <li>The gas level detected by the MQ-2 sensor exceeds <strong>400</strong> (specific gas concentration).</li>
</ul>

<h3>Return to Normal</h3>
<p>If temperature and gas levels fall below their respective thresholds:</p>
<ul>
    <li>The green LED turns back on.</li>
    <li>The red LED turns off.</li>
    <li>The buzzer stops.</li>
</ul>

<h2>🔍 Explanation</h2>

<h3>Setup</h3>
<p>Initializes the LED and buzzer pins. The green LED is turned on by default.</p>

<h3>Loop</h3>
<p>Continuously reads the temperature from the LM35 and the gas level from the MQ-2.</p>

<h3>Conditions</h3>
<p>If either the temperature exceeds <strong>60°C</strong> or the gas level exceeds <strong>400</strong>:</p>
<ul>
    <li>The green LED turns off.</li>
    <li>The red LED turns on.</li>
    <li>The buzzer activates.</li>
</ul>
<p>If both conditions are normal:</p>
<ul>
    <li>The green LED stays on.</li>
    <li>The red LED stays off.</li>
    <li>The buzzer is off.</li>
</ul>

<h2>🔌 Wiring</h2>
<p>Connect the LM35 to:</p>
<ul>
    <li>A0 (Analog Input)</li>
    <li>Power</li>
    <li>Ground</li>
</ul>
<p>Connect the MQ-2 gas sensor to:</p>
<ul>
    <li>A1 (Analog Input)</li>
    <li>Power</li>
    <li>Ground</li>
</ul>
<p>Connect the green LED to:</p>
<ul>
    <li>Pin 10 (with a current-limiting resistor, typically 220Ω)</li>
</ul>
<p>Connect the red LED to:</p>
<ul>
    <li>Pin 9 (with a current-limiting resistor, typically 220Ω)</li>
</ul>
<p>Connect the buzzer to:</p>
<ul>
    <li>Pin 11 (with the negative lead to ground)</li>
</ul>

<h2>📦 Conclusion</h2>
<p>This Arduino-based monitoring system serves as an effective solution for ensuring safety by continuously monitoring environmental conditions and providing immediate alerts when necessary. </p>

<h2>🏷️ Usages</h2>
<p>This project can be utilized in various applications, including:</p>
<ul>
    <li><strong>Incubators</strong>: For monitoring temperature and gas levels to ensure a safe environment for newborns.</li>
    <li><strong>Breath Analyzing Systems</strong>: A non-invasive and comfortable method for patients to monitor their respiratory health. For more details, refer to this <a href="https://www.researchgate.net/publication/288229242_Health_care_application_of_gas_sensors_Medical_devices_of_breath_analysis#:~:text=For%20the%20research%20goal%20of%20exhaled" target="_blank">research paper</a>.</li>
</ul>

</body>
</html>
