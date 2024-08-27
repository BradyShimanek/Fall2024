import requests
from bs4 import BeautifulSoup

# URL of the webpage you want to scrape
url = "http://quotes.toscrape.com/"

# Send a GET request to the webpage
response = requests.get(url)

# Check if the request was successful
if response.status_code == 200:
    # Parse the HTML content of the webpage
    soup = BeautifulSoup(response.content, 'html.parser')
    
    # Find all article titles (assuming they are in <h2> tags)
    titles = soup.find_all('h1')

    # Print each title
    for title in titles:
        print(title.get_text())
else:
    print(f"Failed to retrieve the webpage. Status code: {response.status_code}")
