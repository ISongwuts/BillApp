# BillApp

This is a simple app to manage bills. It is a work in progress.

## Setup
```bash
python -m venv venv 
venv\Scripts\activate
pip install -r requirements.txt
```

## Build
```bash
nuitka --output-dir=output --standalone mainwindow.py
```