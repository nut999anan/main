destinations = [
    "Paris, France",
    "Shanghai, China",
    "Los Angeles, USA",
    "São Paulo, Brazil",
    "Cairo, Egypt"
]

print(destinations)

test_traveler = ['Erin Wilkes', 'Shanghai, China', ['historical site', 'art']]


def get_destination_index(destination):
    pass
    try:
        destination_index = destinations.index(destination)
    except ValueError:
        return -1
    return destination_index


"""
for destination in destinations:
    print(get_destination_index(destination))
    print(destination)
"""

def get_traveler_location(traveler):
    pass
    traveler_destination = traveler[1]
    traveler_destination_index = get_destination_index(traveler_destination)
    return traveler_destination_index

print(get_traveler_location(test_traveler))

#visiting interestong places
attractions = [[], [], [], [], []]


def add_attraction(destination,attraction):
    destination_index = get_destination_index(destination)
    attractions[destination_index].append(attraction)

add_attraction("Cairo, Egypt","Pyramid")


add_attraction("Paris, France", ["the Louvre", ["art", "museum"]])
add_attraction("Paris, France", ["Arc de Triomphe", ["historical site", "monument"]])
add_attraction("Shanghai, China", ["Yu Garden", ["garden", "historcical site"]])
add_attraction("Shanghai, China", ["Yuz Museum", ["art", "museum"]])
add_attraction("Shanghai, China", ["Oriental Pearl Tower", ["skyscraper", "viewing deck"]])
add_attraction("Los Angeles, USA", ["LACMA", ["art", "museum"]])
add_attraction("São Paulo, Brazil", ["São Paulo Zoo", ["zoo"]])
add_attraction("São Paulo, Brazil", ["Pátio do Colégio", ["historical site"]])
add_attraction("Cairo, Egypt", ["Pyramids of Giza", ["monument", "historical site"]])
add_attraction("Cairo, Egypt", ["Egyptian Museum", ["museum"]])



# finding best place to go ? 
def find_attraction(destination,interests):
    #  find the attraction that match the interest of the tourist
    destination_index = get_destination_index(destination)
    attractions_in_city = attractions[destination_index]
    attraction_with_interest = []
    # for each attraction with match interest tag will be add to list
    for attraction in attractions_in_city:
        possible_attraction = attraction
        attraction_tags = attraction[1]
        for interest in interests:
            if interest in attraction_tags:
                attraction_with_interest.append(possible_attraction[0])
    
    
    return attraction_with_interest

la_arts = find_attraction("Los Angeles, USA", ['art'])
print(la_arts)

# See the parts of a city you want to see
def get_attraction_for_traveler(traveler):
    traveler_name = traveler[0]
    traveler_destination = traveler[1]
    traveler_interest = traveler[2]
    traveler_attractions = find_attraction(traveler_destination,traveler_interest)
    interest_string = "Hi "+traveler_name
    interest_string += ", we think you'll like these places around "
    interest_string += traveler_destination + ":"
    for attraction in traveler_attractions:
        interest_string += attraction 

    return interest_string

print(get_attraction_for_traveler(['Dereck Smill', 'Paris, France', ['monument']]))


