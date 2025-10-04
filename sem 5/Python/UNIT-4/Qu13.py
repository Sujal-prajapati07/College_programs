class FileMerger:
    def mergeFiles(self, input_files, output_file):
        out_file = None
        try:
            out_file = open(output_file, "w")
            for file_name in input_files:
                try:
                    with open(file_name, "r") as f:
                        content = f.read()
                        out_file.write(content)

                        if not content.endswith("\n"):
                            out_file.write("\n")
                        print(f"Added content from {file_name}")

                except FileNotFoundError:
                    print(f"Warning: {file_name} not found, skipping.")
        finally:
            if out_file:
                out_file.close()

input_files = ["Qu13_1.txt", "Qu13_2.txt"]
output_file = "Qu13_3.txt"                  

merger = FileMerger()
merger.mergeFiles(input_files, output_file)

print("Files merged successfully!")

# Show merged content
with open(output_file, "r") as f:
    print("\n--- Merged File Content ---")
    print(f.read())
