import sys
name = {
    "NLCS": "North London Collegiate School",
    "BHA": "Branksome Hall Asia",
    "KIS": "Korea International School",
    "SJA": "St. Johnsbury Academy"
}

shortName = sys.stdin.readline().rstrip()
print(name[shortName])