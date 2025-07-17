function changeWeather() {
  const val = document.getElementById("weather").value;
  const box = document.getElementById("weather-box");
  box.className = val;
  box.innerText = `It's ${val}!`;
}
