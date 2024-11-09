// Gallery functionality
document.addEventListener('DOMContentLoaded', () => {
    const viewGalleryButton = document.getElementById('view-gallery-button');
    const fishGallery = document.querySelector('.fish-gallery');
    const fishItems = document.querySelectorAll('.fish-item');
    const prevButton = document.querySelector('.prev-fish');
    const nextButton = document.querySelector('.next-fish');
    const viewDetailButtons = document.querySelectorAll('.view-details');

    const sections = document.querySelectorAll('main > section'); // All sections
    const menuLinks = document.querySelectorAll('.nav-link'); // All menu links

    let currentFishIndex = 0;

    console.log('JavaScript is running!');

    // Toggle the gallery visibility
    viewGalleryButton.addEventListener('click', () => {
        if (fishGallery.style.display === 'none' || fishGallery.style.display === '') {
            console.log('Opening the gallery');
            fishGallery.style.display = 'block';
            showFish(currentFishIndex);
        } else {
            console.log('Closing the gallery');
            fishGallery.style.display = 'none';
        }
    });

    function showFish(index) {
        console.log(`Showing fish at index: ${index}`);
        fishItems.forEach((fish, i) => {
            fish.style.display = i === index ? 'block' : 'none';
        });
    }

    nextButton.addEventListener('click', () => {
        console.log('Next button clicked');
        currentFishIndex = (currentFishIndex + 1) % fishItems.length;
        showFish(currentFishIndex);
    });

    prevButton.addEventListener('click', () => {
        console.log('Previous button clicked');
        currentFishIndex = (currentFishIndex - 1 + fishItems.length) % fishItems.length;
        showFish(currentFishIndex);
    });

    viewDetailButtons.forEach((button) => {
        button.addEventListener('click', (event) => {
            console.log('View Details button clicked');
            const targetId = event.target.getAttribute('data-target');
            const fishDetails = document.getElementById(targetId);

            if (fishDetails) {
                fishDetails.style.display =
                    fishDetails.style.display === 'none' ? 'block' : 'none';
                console.log(`Toggled details visibility: ${fishDetails.style.display}`);
            }
        });
    });

    // Add functionality for menu links to show/hide sections
    menuLinks.forEach((link) => {
        link.addEventListener('click', (event) => {
            event.preventDefault(); // Prevent default link behavior
            const targetSectionId = link.getAttribute('href').substring(1); // Get section ID
            console.log(`Navigating to section: ${targetSectionId}`);

            sections.forEach((section) => {
                section.style.display = section.id === targetSectionId ? 'block' : 'none';
            });
        });
    });
});

// Toggle theme functionality
document.addEventListener('DOMContentLoaded', () => {
    const themeToggleButton = document.getElementById('theme-toggle');
    let themeLink = document.getElementById('dark-theme-link');

    themeToggleButton.addEventListener('click', () => {
        if (!themeLink) {
            themeLink = document.createElement('link');
            themeLink.rel = 'stylesheet';
            themeLink.href = 'styles/dark-theme.css';
            themeLink.id = 'dark-theme-link';
            document.head.appendChild(themeLink);
            themeToggleButton.textContent = 'Light Theme';
        } else {
            document.head.removeChild(themeLink);
            themeLink = null;
            themeToggleButton.textContent = 'Dark Theme';
        }
    });
});   
