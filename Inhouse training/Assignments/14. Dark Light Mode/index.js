const theme = localStorage.getItem("theme");
if (theme === "dark") document.body.classList.add("dark-mode");
function toggleTheme() {
    document.body.classList.toggle("dark-mode");
    const mode = document.body.classList.contains("dark-mode") ? "dark" : "light";
    localStorage.setItem("theme", mode);
}
 

   