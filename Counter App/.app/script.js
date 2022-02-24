let count = 0; //set initial count
//select value and button
const value = document.querySelector("#value");
const btns = document.querySelectorAll(".btn");
//function
btns.forEach(function (btn) {
	btn.addEventListener("click", function (eventObject) {
		const style = eventObject.currentTarget.classList;
		if (style.contains("decrease")) {
			count--;
		} else if (style.contains("increase")) {
			count++;
		} else {
			count = 0;
		}
		if (count > 0) {
			value.style.color = "green";
		} else if (count < 0) {
			value.style.color = "red";
		} else if (count === 0) {
			value.style.color = "white";
		}
		value.textContent = count;
	});
});
