#include <iostream>
#include <openssl>
#include <openssl>
#include <string>

std::string base64_decode(const std::string& in) {
    BIO *bio, *b64;
    int decodeLen = in.length();
    char* buffer = (char*)malloc(decodeLen);
    
    b64 = BIO_new(BIO_f_base64());
    bio = BIO_new_mem_buf(in.c_str(), -1);
    bio = BIO_push(b64, bio);
    
    decodeLen = BIO_read(bio, buffer, in.length());
    
    std::string decoded_string(buffer, decodeLen);
    free(buffer);
    BIO_free_all(bio);
    
    return decoded_string;
}

int main() {
    std::string encoded_string = "U2mu3aBaigVcNGTN3DvmT8mJDGBh1QwhiAOMl0NL7KP58BE0fuXnaAStIsp0aoX6yvPAJw0uakTX...";
    std::string decoded = base64_decode(encoded_string);
    
    std::cout << "Decoded string: " << decoded << std::endl;
    return 0;
}
