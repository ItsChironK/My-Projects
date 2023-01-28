use std::io;

fn main() {
    loop {
        let my_family = ["Dad", "Mom", "Me", "Brother"];

        println!("\n------------------KEY------------------");
        for i in 0..my_family.len() {
            println!("{} {} {}", i+1, ":", my_family[i]);
        }

        println!("\nType your input here:");
        let mut input = String::new();
        io::stdin().read_line(&mut input).expect("Error reading input");

        match input.trim() {
            "1" => println!("You chose: {}", my_family[0]),
            "2" => println!("You chose: {}", my_family[1]),
            "3" => println!("You chose: {}", my_family[2]),
            "4" => println!("You chose: {}", my_family[3]),
             _  => println!("Invalid input"),
        }

        println!("Would you like to continue? (N/n = No | Y/y = Yes");
        let mut continue_choice = String::new();
        io::stdin().read_line(&mut continue_choice).expect("Invalid input");

        if continue_choice.trim_end() == "n" || continue_choice.trim_end() == "N" {
            break;
        }
    }
}
