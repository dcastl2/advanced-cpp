#include <iostream>
#include <cctype>     // <~~~ isalpha, isalnum


/**
 * Check whether sTLD of an e-mail is valid
 * @param email  e-mail whose sTLD is to be verified
 * @param i      index to start checking at
 * @return       whether or not sTLD is valid
 */
bool is_valid_sTLD (std::string email, int &i) {
    while (++i < email.size()) {
      if (email[i] == '.') 
        break;
      if (!isalpha(email[i])) {
        throw  "The sTLD is not valid.";
        return false;
      }
    }
    return true;
}


/**
 * Check whether domain of an e-mail is valid
 * @param email  e-mail whose domain is to be verified
 * @param i      index to start checking at
 * @return       whether or not domain is valid
 */
bool is_valid_domain(std::string email, int &i) {
    while (++i < email.size()) {
      if (email[i] == '.')    break;
      if (!isalnum(email[i])) {
        throw  "The domain is not valid.";
        return false;
      }
    }
    if (i == email.size()) {
      throw  "No period was encountered.";
      return false;
    }
    return true;
}


/**
 * Check whether user of an e-mail is valid
 * @param email  e-mail whose user is to be verified
 * @param i      index to start checking at
 * @return       whether or not user is valid
 */
bool is_valid_user(std::string email, int &i) {
    while (++i < email.size()) {
      if (email[i] == '@')    break;
      if (!isalnum(email[i])) { 
        throw  "The user is not valid.";
        return false;
      }
    }
    if (i == email.size()) {
      throw  "No @ was encountered.";
      return false;
    }
    return true;
}


/**
 * Verify an e-mail address. A valid e-mail address is of the form
 * <user>@<domain>.<sTLD>, where: 
 
   *  <user> and <domain> must begin with an alphabetic character and otherwise
   *  contains alphanumeric characters and underscores
     
   *  <sTLD> must be alphabetic
 
 */
bool is_valid_email(std::string email) {
  int i = 0;
       if (email.size() < 7)           return false;
  else if (!isalpha(email[0]))         return false;
  else if (!is_valid_user  (email, i)) return false;
  else if (!is_valid_domain(email, i)) return false;
  else if (!is_valid_sTLD  (email, i)) return false;
  else                                 return  true;
}


int main () {

  std::string   email;
  std::cout << "email> ";
  std::cin  >>  email;

  try {
    if (is_valid_email(email))
      std::cout << "That address is valid." << std::endl;
  } catch (const char *e) {
    std::cerr << e << std::endl;
  }

}
