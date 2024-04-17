#include <iostream>
#include <asio.hpp>
#ifdef  _WIN32
#define _WIN32_WINNT 0x0A00
#endif //  _WIN32

#define ASIO_STANDALONE
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>
using namespace std;


int main() {
    
    asio::io_context context; // unique instance of asio that has all the requirements for our application
    asio::error_code ec;

    asio::ip::tcp::endpoint endpoint(asio::ip::make_address("93.184.216.32", ec), 80);

    asio::ip::tcp::socket socket(context);


    socket.connect(endpoint, ec);

    if (!ec) {

       
        std::cout << "Connected connect \n"  << std::endl;
           
       

    }
    else {

        std::cout << "Failed to connect \n" << ec.message() << std::endl;
    }

    if (socket.is_open()) {

        
    }

    return 0;


}
