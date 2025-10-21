cmake_minimum_required(VERSION 3.15)
project(holbertonschool-low_level_programming C)

set(CMAKE_C_STANDARD 99)

# Liste tous les fichiers .c dans le dossier variables_if_else_while
file(GLOB EXERCISES "variables_if_else_while/*.c")

# Crée un exécutable par fichier
foreach(EXER ${EXERCISES})
    # Récupère juste le nom du fichier sans extension
    get_filename_component(EXE_NAME ${EXER} NAME_WE)
    add_executable(${EXE_NAME} ${EXER})
endforeach()
