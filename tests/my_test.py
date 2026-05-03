import subprocess
import os

def test_sorting():
    # Priprava testnih podatkov
    input_data = "105 20 3 255 0 42"
    with open("test_in.txt", "w") as f:
        f.write(input_data)
    

    subprocess.run(["./vaja2", "test_in.txt"], check=True)
    
    # Branje rezultatov
    if not os.path.exists("out.txt"):
        print("Error: out.txt ne obstaja!")
        exit(1)
        
    with open("out.txt", "r") as f:
        result = list(map(int, f.read().split()))
    
    # Preverjanje
    expected = sorted([105, 20, 3, 255, 0, 42])
    if result == expected:
        print("Test uspel!")
    else:
        print(f"Test spodletel! Dobil: {result}, pričakoval: {expected}")
        exit(1)

if __name__ == "__main__":
    test_sorting()