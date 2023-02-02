unsigned int binary_to_uint(const char *b) 
{ 
    unsigned int result = 0; 
  
    // Iterate through all characters of input string and 
    // update result 
    for (int i = 0; b[i] != '\0'; i++) { 
        result = result * 2 + (b[i] - '0'); 
    } 
  
    // return result 
    return result; 
}
