#include <iostream>
using namespace std;

// Function to get temperature from user
float getTemperature() {
    float temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    return temp;
}

// Function to get humidity from user
float getHumidity() {
    float humidity;
    cout << "Enter humidity percentage: ";
    cin >> humidity;
    return humidity;
}

// Function to get wind speed from user
float getWindSpeed() {
    float windSpeed;
    cout << "Enter wind speed in km/h: ";
    cin >> windSpeed;
    return windSpeed;
}

// Function to get rain status
int getRainStatus() {
    int rain;
    cout << "Is it raining?\n1 = Yes\n0 = No\n";
    cin >> rain;
    return rain;
}

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float tempC) {
    return (tempC * 1.8) + 32;
}

// Function to display the complete weather report
void displayWeatherReport(float tempC, float humidity, float wind, int rain) {
    float tempF = celsiusToFahrenheit(tempC);

    cout << "Temperature: " << tempC << " °C (" << tempF << " °F)" << endl;
    cout << "Humidity: " << humidity << " %" << endl;
    cout << "Wind Speed: " << wind << " km/h" << endl;

    if (rain == 1)
        cout << "Rain Status: Raining" << endl;
    else
        cout << "Rain Status: Not Raining" << endl;
}

// Function to classify temperature
void classifyTemperature(float tempF) {
    if (tempF < 59)
        cout << "Temperature Classification: Cold" << endl;
    else if (tempF <= 86)
        cout << "Temperature Classification: Moderate" << endl;
    else
        cout << "Temperature Classification: Hot" << endl;
}

// Function to classify humidity
void classifyHumidity(float humidity) {
    if (humidity < 30)
        cout << "Humidity Classification: Low" << endl;
    else if (humidity <= 70)
        cout << "Humidity Classification: Normal" << endl;
    else
        cout << "Humidity Classification: High" << endl;
}

// Function to classify wind speed
void classifyWindSpeed(float wind) {
    if (wind < 10)
        cout << "Wind Classification: Calm" << endl;
    else if (wind <= 25)
        cout << "Wind Classification: Breezy" << endl;
    else
        cout << "Wind Classification: Windy" << endl;
}

// Function to suggest clothing
void clothingSuggestion(float tempF, int rain) {
    cout << "\nClothing Suggestion: ";

    if (rain == 1)
        cout << "Take an umbrella or wear a raincoat. ";

    if (tempF < 59)
        cout << "Wear a jacket or sweater.";
    else if (tempF <= 86)
        cout << "Light clothing is fine.";
    else
        cout << "Wear light and breathable clothes.";

    cout << endl;
}

int main() {
    float temperature;
    float humidity;
    float windSpeed;
    int raining;

    // Get weather data from user
    temperature = getTemperature();
    humidity = getHumidity();
    windSpeed = getWindSpeed();
    raining = getRainStatus();

    cout << "\n--- Weather Report ---\n";
    displayWeatherReport(temperature, humidity, windSpeed, raining);

    cout << endl;

    // Classifications
    float tempF = celsiusToFahrenheit(temperature);
    classifyTemperature(tempF);
    classifyHumidity(humidity);
    classifyWindSpeed(windSpeed);

    clothingSuggestion(tempF, raining);

    return 0;
}