def lbs_to_kgs(weight):
    return weight * 0.45

def kg_to_lbs(weight):
    return weight / 0.45

def max_in_array(arr):
    max = -999
    for item in arr:
        if(item > max):
            max = item
    return max