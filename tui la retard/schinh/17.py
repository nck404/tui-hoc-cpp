def standardize_name(name):
    words = name.split()
    for i in range(len(words)):
        words[i] = words[i].capitalize()
    standardized_name_1 = ', '.join(words)
    standardized_name_2 = ', '.join(reversed(words))

    return standardized_name_1, standardized_name_2
input_name = input()
result_1, result_2 = standardize_name(input_name)
print(result_1)
print(result_2)
