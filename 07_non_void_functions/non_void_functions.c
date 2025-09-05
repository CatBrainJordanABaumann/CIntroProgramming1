#include <stdio.h>

// Function takes nothing and returns an integer:
int get_five();

double miles_to_kilometers(int miles);

int get_temperature();
void describe_weather(int temp);

int main() {
    int n = get_five();

    int miles = 100;
    double kilometers = miles_to_kilometers(miles);
    printf("%d miles = %lf kilometers\n", miles, kilometers);

    int temperature = get_temperature();
    describe_weather(temperature);

    return 0;
}

int get_five() {
    return 5;
}

double miles_to_kilometers(int miles) {
    double kilometers = 1.609 * miles;
    return kilometers;
}

int get_temperature() {
    puts("Enter the temperature:");
    int temperature;
    scanf("%d", &temperature);
    return temperature;
}

void describe_weather(int temperature) {
    if (temperature > 80)
        puts("Hot temperature");
    else if (temperature < 70)
        puts("Cold temperature");
    else
        puts("Fine temperature");
}