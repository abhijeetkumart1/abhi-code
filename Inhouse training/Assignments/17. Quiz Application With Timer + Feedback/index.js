let questions = [
  { q: "Capital of India?", options: ["Delhi", "Mumbai", "Chennai"], answer: "Delhi" },
  { q: "5 + 3 =", options: ["6", "8", "10"], answer: "8" }
];
let index = 0, score = 0, timer;

function loadQuestion() {
  const current = questions[index];
  document.getElementById("question").innerText = current.q;
  const options = document.getElementById("options");
  options.innerHTML = "";
  current.options.forEach(opt => {
    let li = document.createElement("li");
    li.innerText = opt;
    li.onclick = () => checkAnswer(opt);
    options.appendChild(li);
  });
  startTimer();
}

function checkAnswer(opt) {
  clearInterval(timer);
  let correct = questions[index].answer;
  document.getElementById("feedback").innerText = (opt === correct) ? "✅ Correct!" : "❌ Wrong!";
  score += (opt === correct) ? 1 : 0;
  setTimeout(() => {
    index++;
    if (index < questions.length) loadQuestion();
    else document.getElementById("quiz-container").innerHTML = `Quiz Over! Score: ${score}`;
  }, 1000);
}

function startTimer() {
  let timeLeft = 10;
  document.getElementById("time").innerText = timeLeft;
  timer = setInterval(() => {
    timeLeft--;
    document.getElementById("time").innerText = timeLeft;
    if (timeLeft === 0) {
      clearInterval(timer);
      checkAnswer(null);
    }
  }, 1000);
}

loadQuestion();
