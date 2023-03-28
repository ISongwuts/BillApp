from docxtpl import DocxTemplate
from pdf2image import convert_from_path
# from docx2pdf import convert
import os
import glob

class DocumentGenerator:
    def render(self, name, addr, billNumber, date, taxid, total, productList):
            
            PrimaryDocument = DocxTemplate("template/PrimaryTemplate.docx")
            PrimaryOutput = os.path.join("generator/doc", "generator_bill_primary.docx")

            SecondaryDocument = DocxTemplate("template/SecondaryTemplate.docx")
            SecondaryOutput = os.path.join("generator/doc", "generator_bill_secondary.docx")
            thai_month = ["ม.ค.", "ก.พ.", "มี.ค.", "เม.ย.", "พ.ค.", "มิ.ย.", "ก.ค.", "ส.ค.", "ก.ย.", "ต.ค.", "พ.ย.", "ธ.ค."]
            month, day, year = date.split("/")
            formatDateThai = f"{day} {thai_month[int(month)-1]} {year}"

            PrimaryDocument.render({
                "CustomerName":name,
                "CustomerAddress":addr,
                "BillNumber":billNumber,
                "Date":formatDateThai,
                "TaxID":taxid,
                "Total": total,
                "productList":productList})
            PrimaryDocument.save(PrimaryOutput)

            SecondaryDocument.render({
                "CustomerName":name,
                "CustomerAddress":addr,
                "BillNumber":billNumber,
                "Date":formatDateThai,
                "TaxID":taxid,
                "Total": total,
                "productList":productList})
            SecondaryDocument.save(SecondaryOutput)

            if os.path.exists(PrimaryOutput) and os.path.exists(SecondaryOutput):
                pdfCounter = len(glob.glob1("generator/pdf/primary/", "*.pdf"))
                pngCounter = len(glob.glob1("generator/png/primary/", "*.png"))
                
                primary_pdf_path = os.path.join("generator/pdf/primary", f"converted_{pdfCounter+1}_primary.pdf")
                secondary_pdf_path = os.path.join("generator/pdf/secondary", f"converted_{pdfCounter+1}_secondary.pdf")

                # TODO: docx2pdf is not implemented for macos apple silicon (ventuna)
                # f = open(primary_pdf_path, "w")
                # f.close()
                # f2 = open(secondary_pdf_path, "w")
                # f2.close()

                # convert(PrimaryOutput, primary_pdf_path, keep_active=True)
                # convert(SecondaryOutput, secondary_pdf_path, keep_active=True)


                pagePrimary = convert_from_path(primary_pdf_path, dpi=95)
                pageSecondary = convert_from_path(secondary_pdf_path, dpi=95)

                for i, page in enumerate(pagePrimary):
                    page.save(os.path.join("generator/png/primary", f"converted_{pngCounter+1}_primary.png"), "PNG")
                for i, page in enumerate(pageSecondary):
                    page.save(os.path.join("generator/png/secondary", f"converted_{pngCounter+1}_secondary.png"), "PNG")

                return True
            return False