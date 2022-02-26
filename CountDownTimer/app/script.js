//Base Javascript file

const daysEL = document.getElementById("days");
const HoursEL = document.getElementById("Hours");
const MinsEL = document.getElementById("Mins");
const SecondsEL = document.getElementById("Seconds");

const newYear = "01 Jan 2023";

const countdown = () => {
	const newYearDate = new Date(newYear);
	const currentDate = new Date();
	//	var currentOffset = currentDate.getTimezoneOffset();
	const diff = (newYearDate - currentDate) / 1000;

	const days = Math.floor(diff / 3600 / 24);
	const Hours = Math.floor((diff / 3600) % 24);
	const Mins = Math.floor(diff / 3600) % 60;
	const Seconds = Math.floor(diff % 60);

	daysEL.innerHTML = formateTime(days);
	HoursEL.innerHTML = formateTime(Hours);
	MinsEL.innerHTML = formateTime(Mins);
	SecondsEL.innerHTML = formateTime(Seconds);
};

const formateTime = (time) => {
	return time < 10 ? `0${time}` : time;
};
//initial Call
countdown();
setInterval(countdown, 1000);
