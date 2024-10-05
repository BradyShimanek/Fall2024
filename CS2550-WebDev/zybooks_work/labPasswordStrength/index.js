function isStrongPassword(password) {
    if (password.length < 8) {
        return false;
    }

    if (password.toLowerCase().includes("password")) {
        return false
    }

    let hasUppercase = false;
    for (let i = 0; i < password.length; i++) {
        if (password[i] === password[i].toUpperCase() && isNaN(password[i])) {
            hasUppercase = true;
            break;
        }
    }

    if (!hasUppercase) {
        return false;
    }

    return true;
    
 }
 
 console.log("Testing isStrongPassword()...");
 
 console.log("Qwerty - " + isStrongPassword("Qwerty"));                  // false - Too short
 console.log("passwordQwerty - " + isStrongPassword("passwordQwerty"));  // false - Contains "password"
 console.log("qwerty123 - " + isStrongPassword("qwerty123"));            // false - No uppercase chars
 console.log("Qwerty123 - " + isStrongPassword("Qwerty123"));            // true
 
 
 // Do NOT remove the following line:
 export default isStrongPassword;
 