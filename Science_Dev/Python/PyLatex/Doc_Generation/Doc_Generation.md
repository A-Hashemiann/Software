# Creating a Virtual Environment with a Specific Python Version

## Step 1: Install pyenv

Use `pyenv` to manage multiple Python versions on your Linux system. To install `pyenv`, run the following command:

`bash curl https://pyenv.run | bash` 



after installation add the following lines to your shell configuration file (`.bashrc`, `.zshrc`, etc.):

` bash export PATH="HOME/.pyenv/bin:PATH" eval "(pyenvinit−−path)"eval"(pyenv init -)" eval "$(pyenv virtualenv-init -)" ` 


restart your shell or open a new terminal window to apply the changes.

## Step 2: Install the Desired Python Version

Use `pyenv` to install the specific Python version needed for your project:

` bash pyenv install 3.8.0 ` 

Replace `3.8.0` with the desired version number.

## Step 3: Create a Virtual Environment

Once the desired Python version is installed, create a virtual environment using `virtualenv` or `venv`:

Using `virtualenv`:

` bash pip install virtualenv virtualenv myprojectenv ` 

Replace `myprojectenv` with the name you want to give to your virtual environment.

## Step 4: Activate the Virtual Environment

Before starting your project, activate the virtual environment:

` bash source myprojectenv/bin/activate ` 

Your prompt should now indicate the active virtual environment.

## Step 5: Install Packages

With the virtual environment activated, install any required packages using `pip`:

` bash pip install -r req.txt ` 

