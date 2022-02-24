//Color-Flipper-Application
const colors = [
	"blue",
	"red",
	"green",
	"orange",
	"yellow",
	"pink",
	"red",
	"purple",
	"grey",
];
const btn = document.getElementById("btn");
const color = document.querySelector(".color");

btn.addEventListener("click", function () {
	console.log(document.body);
	//get random number between 0-3 colors[3]
	const randomNumber = getRandomNumber();
	//getting values of random number in log
	console.log(randomNumber);
	document.body.style.backgroundColor = colors[randomNumber];
	color.textContent = colors[randomNumber];
});

function getRandomNumber() {
	return Math.floor(Math.random() * colors.length);
}
