import tkinter as tk
from tkinter import messagebox, filedialog
import yaml
import subprocess

class YAMLConfigEditor:
    def __init__(self, master):
        self.master = master
        self.master.title("YAML Config Editor")

        self.text_area = tk.Text(master, wrap=tk.WORD, height=20, width=50)
        self.text_area.pack(pady=10)

        self.load_button = tk.Button(master, text="Load YAML", command=self.load_yaml)
        self.load_button.pack(side=tk.LEFT, padx=5)

        self.save_button = tk.Button(master, text="Save YAML", command=self.save_yaml)
        self.save_button.pack(side=tk.LEFT, padx=5)

        self.save_button = tk.Button(master, text="Launch Bridge", command=self.launch_bridge)
        self.save_button.pack(side=tk.LEFT, padx=5)

    def load_yaml(self):
        file_path = filedialog.askopenfilename(filetypes=[("All files", "*.*")])
        if file_path:
            with open(file_path, 'r') as file:
                content = file.read()
                self.text_area.delete(1.0, tk.END)  # Clear the text area
                self.text_area.insert(tk.END, content)  # Insert the YAML content

    def save_yaml(self):
        file_path = filedialog.asksaveasfilename(defaultextension=".yaml", filetypes=[("YAML files", "*.yaml;*.yml")])
        if file_path:
            try:
                # Parse the content from the text area to ensure it's valid YAML
                content = self.text_area.get(1.0, tk.END)
                yaml.safe_load(content)  # Validate the YAML format
                with open(file_path, 'w') as file:
                    file.write(content)
                messagebox.showinfo("Success", "YAML file saved successfully!")
            except yaml.YAMLError as e:
                messagebox.showerror("Error", f"Invalid YAML format:\n{e}")
            except Exception as e:
                messagebox.showerror("Error", f"An error occurred:\n{e}")
    
    def launch_bridge(self):
        command = (
            "source install/setup.bash && "
            "ros2 launch vehicle host_vehicle_launch.py"
        )

        try:
            # Open a new gnome-terminal and run the command
            subprocess.Popen(["gnome-terminal", "--", "bash", "-c", command])
        except Exception as e:
            messagebox.showerror("Error", f"Failed to launch terminal:\n{e}")

if __name__ == "__main__":
    root = tk.Tk()
    app = YAMLConfigEditor(root)
    root.mainloop()
