
class Plant:
    def __init__(self, name: str, height: float, age: int):
        self._name = name
        self._height = height
        self._age = age

    def set_height(self, new_height: int):
        if new_height < 0:
            print(f"{self._name}: Error, height can't be negative")
            print("Height update rejected")
        else:
            self._height = new_height

    def set_age(self, new_age: int):
        if new_age < 0:
            print(f"{self._name}: Error, age can't be negative")
            print("Age update rejected\n")
        else:
            self._age = new_age

    def get_height(self):
        return self._height

    def get_age(self):
        return self._age


if __name__ == "__main__":
    p1 = Plant("Rose", 15.0, 10)
    h = p1.get_height()
    a = p1.get_age()

    print("=== Garden Security System ===")
    print(f"Plant created: {p1._name}: {h}cm, {a} days old\n")

    p1.set_height(25)
    print(f"Height updated: {p1.get_height()}cm")

    p1.set_age(30)
    print(f"Age updated: {p1.get_age()} days\n")

    p1.set_height(-10)
    p1.set_age(-5)

    print(f"Current state: {p1._name}: {float(h)}cm, {a} days old")
