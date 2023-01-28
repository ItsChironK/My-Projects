use std::io;

fn main() {
    println!("-------------------------------- Guessing the Number! --------------------------------");

    println!("Please input your guess: ");

    let mut guess = String::new();
    io::stdin().read_line(&mut guess).expect("Error reading input!");

    // println!("You guessed: {}", guess);
}
