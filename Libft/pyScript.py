import os
import sys

def read_and_print_lines(directory_path):
    try:
        # Iterate through all files in the directory
        for filename in os.listdir(directory_path):
            # Check if the file ends with '.c'
            if filename.endswith(".c"):
                file_path = os.path.join(directory_path, filename)

                # Open and read the file line by line
                with open(file_path, 'r') as file:
                    #print(f"Contents of {filename}:")
                    for line in file:
                        firstLetter = line[0]
                        if firstLetter in "/#" or firstLetter.isspace():
                            continue
                        else:
                            print(line.strip() + ";")
                            break

                    #print("\n")  # Add a newline between files

    except FileNotFoundError:
        print(f"Directory not found: {directory_path}")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    # Check if a directory path is provided as an argument
    if len(sys.argv) != 2:
        print("Usage: python script.py <directory_path>")
    else:
        directory_path = sys.argv[1]
        read_and_print_lines(directory_path)
