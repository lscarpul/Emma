
class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self.height = height
        self.age_days = age

    def grow(self, amount):
        self.height += amount

    def age(self):
        self.age_days += 1


if __name__ == "__main__":
    print("=== Garden Plant Growth ===")
    p1 = Plant("Rose", 25.0, 30)
    initial_height = p1.height

    for day in range(1, 8):
        print(f"=== Day {day} ===")
        print(f"{p1.name}: {p1.height:.1f}cm, {p1.age_days} days old")

        p1.grow(0.8)
        p1.age()

    growth = p1.height - initial_height
    print(f"Growth this week: {growth:.1f}cm")
