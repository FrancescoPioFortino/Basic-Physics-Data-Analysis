from functions import calculate_mean, find_maximum, find_minimum, standard_error

def main():
    data = []
    for i in range(10):
        user_input = input(f" Enter the data number {i+1}: ")

        number = float(user_input)
        data.append(number)

    mean = calculate_mean(data)

    print("\n--- RESULTS OF ANALYSIS ---\n")

    print(f"The mean is: {mean:.2f}")
    print(f"The maximum value is: {find_maximum(data):.2f}")
    print(f"The minimum value is: {find_minimum(data):.2f}")
    print(f"The standard error is: {standard_error(data,mean):.2f}")

if __name__ == "__main__":
    main()
    
