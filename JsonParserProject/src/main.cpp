#include <iostream>
#include <string>
#include <vector>

#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    std::cout << "--- JSON Parser Demo ---" << std::endl;

    // 1. Parse a JSON string
    std::cout << "\n--- Parsing a JSON string ---" << std::endl;

    try{
        std::string json_string = R"({
            "name": "John Doe",
            "age": 30,
            "isStudent": false,
            "courses": [
                {"title": "History", "credits":3},
                {"title": "Math", "credits":4}
            ],
            "address": {
                "street": "123 Main St",
                "city": "Anytown"
            }
        })";

        json parsed_json = json::parse(json_string);

        std::cout << "Successfully parsed JSON string." << std::endl;
        std::cout << "Name: " << parsed_json["name"].get<std::string>() << std::endl;
        std::cout << "Age: " << parsed_json["age"].get<int>() << std::endl;
        std::cout << "Is Student: " << parsed_json["isStudent"].get<bool>() << std::endl;
        std::cout << "First course title: " << parsed_json["courses"][0]["title"].get<std::string>() << std::endl;
        std::cout << "City: " << parsed_json["address"]["city"].get<std::string>() << std::endl;

        std::cout << "Courses: " << std::endl;
        for (const auto& course : parsed_json["courses"]){
            std::cout << " - " << course["title"].get<std::string>() << " (" << course["credits"].get<int>() << " credits)" << std::endl;
        }
    } catch (json::parse_error& e) {
        std::cerr << "JSON parsing error: " << e.what() << std::endl;
    } catch (json::type_error& e){
        std::cerr << "JSON type error: " << e.what() << std::endl;
    } catch (const std::exception& e){
        std::cerr << "An unexpected error occurred: " << e.what() << std::endl;
    }

    
    
    std::cout << "\n--- Creating a JSON object ---" << std::endl;
    try{
        json created_json;
        created_json["pi"] = 3.141;
        created_json["happy"] = true;
        created_json["name"] = "John Doe";
        created_json["answer"]["everything"] = 42;
        created_json["list"] = {1,2,3};
        created_json["object"] = {{"currency", "USD"}, {"value", 42.99}};

        std::string serialized_json = created_json.dump(2);
        std::cout << "Serialized JSON: " << serialized_json << std::endl;
    } catch (json::type_error& e){
        std::cerr << "JSON type error: " << e.what() << std::endl;
    } catch (const std::exception& e){
        std::cerr << "An unexpected error occurred: " << e.what() << std::endl;
    }

    std::cout << "\n--- End of program ---" << std::endl;
    return 0;
}