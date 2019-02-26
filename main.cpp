// main.cpp
#include <fdeep/fdeep.hpp>
int main()
{
    std::cout << "Loading model" << std::endl;
    const auto model = fdeep::load_model("../vgg.json");
    std::cout << "Speed: ";
    std::cout << model.test_speed() << std::endl;
    std::cout << "Running all zeros: "<< std::endl;

    fdeep::tensor5 input_rgb(fdeep::shape5(1, 1, 224, 224, 3), 0);
    const auto result = model.predict(
        {input_rgb});
    std::cout << fdeep::show_tensor5s(result) << std::endl;
    }
}
