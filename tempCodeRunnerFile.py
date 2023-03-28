     with sqlite3.connect("database/customer.db") as conn:
            cursor = conn.cursor()
            cursor.execute("SELECT Address FROM CustomerTable WHERE Name=?", (select_item,))
            fetched_addr = cursor.fetchone()
            
            if fetched_addr is not None:
                addr = fetched_addr[0]
                self.addressInput.setText(str(addr))
            else:
                self.addressInput.setText("")
                print("No address found for the selected customer.")