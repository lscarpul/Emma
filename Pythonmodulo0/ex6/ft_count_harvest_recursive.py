

def ft_count_harvest_recursive():
    days = int(input("Days until harvest: "))

    def helper(count):
        if count > days:
            return
        print("Day", count)
        helper(count + 1)

    helper(1)
    print("Harvest time!")


# ft_count_harvest_recursive()
