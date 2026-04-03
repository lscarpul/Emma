

def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:

    seed = seed_type.capitalize()

    if unit == "packets":
        print(f"{seed} seeds: {quantity} packets available")
    elif unit == "grams":
        print(f"{seed} seeds: {quantity} grams total")
    elif unit == "area":
        print(f"{seed} seeds: covers {quantity} square meters")


# if __name__ == "__main__":
#     ft_seed_inventory("tomato", 15, "packets")
#     ft_seed_inventory("carrot", 8, "grams")
#     ft_seed_inventory("lettuce", 12, "area")
