from abc import ABC

class Platform:
    def export(self, data, format_type):
        pass

class DesktopPlatform(Platform):
    def export(self, data, format_type):
        print(f"Exporting {format_type} on Desktop using desktop-specific APIs.")
    

class WebPlatform(Platform):
    def export(self, data, format_type):
        print(f"Exporting {format_type} on Web using web-specific APIs.")

class ExportFormat:
    def __init__(self, platform):
        self.platform = platform

    def export(self, data):
        pass

class PDFExport(ExportFormat):
    def export(self, data):
        self.platform.export(data, "PDF")

class DOCXExport(ExportFormat):
    def export(self, data):
        self.platform.export(data, "DOCX")

class CSVExport(ExportFormat):
    def export(self, data):
        self.platform.export(data, "CSV")



if __name__ == "__main__":
    # Exporting a PDF on Desktop
    desktop_platform = DesktopPlatform()
    pdf_export = PDFExport(desktop_platform)
    pdf_export.export("Report data")

    # Exporting a DOCX on Web
    web_platform = WebPlatform()
    docx_export = DOCXExport(web_platform)
    docx_export.export("Document data")

    # Exporting a CSV on Desktop
    csv_export = CSVExport(desktop_platform)
    csv_export.export("CSV data")

