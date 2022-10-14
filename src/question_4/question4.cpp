//
bool test_config()
{
    return true;
}

int get_hours (int seconds_since_1970)
{
    int hours;
    hours = seconds_since_1970 % 86400/60/60;
    return hours;
}

int get_minutes (int seconds_since_1970)
{
    int minutes;
    minutes = seconds_since_1970 % 86400 % 3600 / 60;
    return minutes;
}

int get_seconds (int seconds_since_1970)
{
    int seconds;
    seconds = seconds_since_1970 % 86400 % 3600 % 60;
    return seconds;
}