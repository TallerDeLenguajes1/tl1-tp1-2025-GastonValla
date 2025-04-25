El archivo .gitignore sirve para indicarle a Git qué archivos o carpetas debe ignorar (no rastrear). Esto es útil para no subir archivos temporales, binarios, configuraciones locales, etc.
Es conveniente crearlo al iniciar un proyecto, antes del primer commit.
Para ignorar el archivo ignorado.txt, simplemente se debe agregar una línea con ese nombre al archivo .gitignore.

Regla para ignorar un archivo gitignore
ignorado.txt
*.exe
*.o
.vscode/
