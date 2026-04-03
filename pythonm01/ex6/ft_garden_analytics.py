class Plant:
    def __init__(self, name: str, height: float, age: int):
        self._name = name
        self._height = height
        self._age = age

    def show(self):
        print(f"{self._name}: {self._height}cm, {self._age} days old")
        self.inc_show()

    def grow(self, amount):
        self._height += amount
        self.inc_grow()
        
    def add_age(self, days):
        self._age += days
        self.inc_age()
    
    def check_age(self):
        if(self._age > 365):
            print(f"Is {self._age} days more than a year? -> True")
        else:
            print(f"Is {self._age} days more than a year? -> False")

    def inc_grow(self):
        self.grow_calls += 1

    def inc_age(self):
        self.age_calls += 1

    def inc_show(self):
        self.show_calls += 1
    
    class _Stats():
        def __init__(self):
            self.__grow_calls  = 0
            self.__age_calls  = 0
            self.__show_calls  = 0

        def show_stats(self):
            super().show()
            print(f"[statistics for {self._name}]")
            print(f"Stats: {self.grow_calls} grow, {self.age_calls} age, {self.show_calls} show")





class Flower(Plant):
    def __init__(self, name: str, height: float, age: int, color: str):
        super().__init__(name, height, age)
        self.color = color
        self.is_blooming = False

    def show(self):
        super().show()
        print(f"Color: {self.color}")
        if self.is_blooming:
            print(f"{self._name} is blooming beautifully!")
        else:
            print(f"{self._name} has not bloomed yet")
        super().show_stats()
        
    def bloom(self):
        print(f"[asking the {self.name.lower()} to grow and bloom]")
        self.grow(1)
        self.is_blooming = True

class Seed(Flower):
    def __init__(self, name: str, height: float, age: int, color: str, seeds: int):
        super().__init__(name, height, age, color)
        self.seeds = seeds
    
    def show(self):
        super().show
        print(f"Seeds: {self.seeds}")
        super.bloom()
    
    def seeds_grow(self):
        if (super.is_blooming == True):
            self.seeds =+ 42


class Tree(Plant):
    def __init__(self, name, height, age, trunk_diameter):
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter
        
    def show(self):
        super().show()
        print(f"Trunk diameter: {self.trunk_diameter}cm")
        super().inc_show()
        super().show_stats()
        print(f"{self.inc_shade} shade")
        
    def produce_shade(self):
        print(f"[asking the {self.name.lower()} to produce shade]")
        print(f"Tree {self.name} now produces a shade of {self.height}cm long and {self.trunk_diameter}cm wide.\n")
        self.inc_shade =+ 1


class Anonymus:
    def __init__(self, name: str, height: float, age: int):
        self._name = name
        self._height = height
        self._age = age
        self._stats = self._stats()
        self.__grow_calls = grow_calls = 0
        self.__age_calls = age_calls = 0
        self.__show_calls = show_calls = 0

    def show(self):
        print(f"{self.name}: {self.height}cm, {self.age} days old")
        self.inc_show()

    def grow(self, amount):
        self.height += amount
        self.inc_grow()

        
    def add_age(self, days):
        self.age += days
        self.inc_age()

    def show_stats(self):
        self.show()
        print(f"[statistics for {self.name}]")
        print(f"Stats: {self.grow_calls} grow, {self.age_calls} age, {self.show_calls} show")

    def inc_grow(self):
        self.grow_calls += 1

    def inc_age(self):
        self.age_calls += 1

    def inc_show(self):
        self.show_calls += 1

if __name__ == "__main__":
    print("=== Garden Statistics ===")
    print("=== Check year-old")
    eta = Plant("plant", 0, 30)
    eta.check_age()
    eta = Plant("plant", 0, 400)
    eta.check_age()

    print("\n=== Flower")
    rose = Flower("Rose", 15.0, 10, "red")
    rose.show()
    rose.bloom()
    rose.show()
    
    print("\n=== Tree")
    oak = Tree("Oak", 200.0, 365, 5.0)
    oak.show()
    oak.produce_shade()
    
    print("\n=== Seed")
    sunflower = Seed("Sunflower", 80, 45, "Yellow", 0)
    sunflower.show()
    sunflower.bloom()
    sunflower.seeds_grow()
    
    print("\n=== Anonymus")
    anonymus = Anonymus("Unknown Plant", 0, 0)
    anonymus.show()