def calculate_mean(data: list[float]) -> float:
    sum_data = 0
    for value in data:
        sum_data += value
    
    mean = sum_data / len(data)
    return mean

def find_maximum(data: list[float]) -> float:
    max_value= data[0]
    for value in data:
        if max_value< value:
            max_value = value
    return max_value

def find_minimum(data: list[float]) -> float:
    min_value= data[0]
    for value in data:
        if min_value > value:
            min_value = value
    return min_value

def square_root(number: float) -> float:
    if number <= 0:
        return 0

    sqrt_number = number/2
    
    for cycle in range (20):
        sqrt_number = (sqrt_number + number / sqrt_number)/2
    return sqrt_number

def standard_error(data: list[float], mean: float) -> float:
    sum_of_squares = 0

    for value in data:
        deviation = value - mean
        sum_of_squares += (deviation * deviation)
    
    variance = sum_of_squares / (len(data) * (len(data)-1))
    
    return  square_root(variance)

