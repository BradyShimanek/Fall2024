/*
Project: Personal Website - Visitor Form Validation
Name: Brady Shimanek
Submitted: 12/02/2024

I declare that the following source code was written by me, or provided
by the instructor for this project. I understand that copying source
code from any other source, providing source code to another student, 
or leaving my code on a public website constitutes cheating.
*/


const stateAbbreviations = [
    'AL', 'AK', 'AZ', 'AR', 'CA', 'CO', 'CT', 'DE', 'FL', 'GA',
    'HI', 'ID', 'IL', 'IN', 'IA', 'KS', 'KY', 'LA', 'ME', 'MD',
    'MA', 'MI', 'MN', 'MS', 'MO', 'MT', 'NE', 'NV', 'NH', 'NJ',
    'NM', 'NY', 'NC', 'ND', 'OH', 'OK', 'OR', 'PA', 'RI', 'SC',
    'SD', 'TN', 'TX', 'UT', 'VT', 'VA', 'WA', 'WV', 'WI', 'WY'
];

// Function to check if a field is required
function checkRequired(fieldId, errorMessage) {
    const field = document.getElementById(fieldId);
    const isValid = field.value.trim() !== "";
    setElementValidity(fieldId, isValid, errorMessage);
    return isValid;
}

// Function to validate a field's format using a regex
function checkFormat(fieldId, errorMessage, regex) {
    const field = document.getElementById(fieldId);
    const isValid = regex.test(field.value.trim());
    setElementValidity(fieldId, isValid, errorMessage);
    return isValid;
}

// Function to validate a state against a list of abbreviations
function validateState(fieldId, errorMessage) {
    const field = document.getElementById(fieldId);
    const isValid = stateAbbreviations.includes(field.value.trim().toUpperCase());
    setElementValidity(fieldId, isValid, errorMessage);
    return isValid;
}

// Utility function to set validity and error messages
function setElementValidity(fieldId, isValid, errorMessage) {
    const field = document.getElementById(fieldId);
    const errorDiv = field.nextElementSibling; 

    field.classList.add("was-validated");

    if (isValid) {
        field.classList.remove("invalid");
        field.classList.add("valid");
        errorDiv.textContent = ""; 
    } else {
        field.classList.remove("valid");
        field.classList.add("invalid");
        errorDiv.textContent = errorMessage; 
    }
}

// Function to validate the whole form when submitted
function validateForm() {
    let isFormValid = true;

    // Validates the required fields
    isFormValid &= checkRequired("first-name", "First name is required.");
    isFormValid &= checkRequired("last-name", "Last name is required.");
    isFormValid &= checkRequired("address", "Address is required.");
    isFormValid &= checkRequired("city", "City is required.");
    isFormValid &= checkRequired("state", "State is required.");
    isFormValid &= checkRequired("zip", "ZIP code is required.");
    isFormValid &= checkRequired("email", "Email is required.");
    isFormValid &= checkRequired("phone", "Phone number is required.");
    
    // Validate field formats
    isFormValid &= checkFormat("zip", "Invalid zip code.", /^\d{5}(-\d{4})?$/);
    isFormValid &= checkFormat("email", "Invalid email address.", /^[^\s@]+@[^\s@]+\.[^\s@]+$/);
    isFormValid &= checkFormat("phone", "Invalid phone number.", /^\d{10}$/);

    // Validate the state
    isFormValid &= validateState("state", "Invalid state abbreviation.");

    return !!isFormValid; // This converts to a boolean
}