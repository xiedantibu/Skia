#include "SkPdfTrueTypeFontDictionary_autogen.h"


#include "SkPdfNativeDoc.h"
SkString SkPdfTrueTypeFontDictionary::Subtype(SkPdfNativeDoc* doc) {
  SkPdfNativeObject* ret = get("Subtype", "");
  if (doc) {ret = doc->resolveReference(ret);}
  if ((ret != NULL && ret->isName()) || (doc == NULL && ret != NULL && ret->isReference())) return ret->nameValue2();
  // TODO(edisonn): warn about missing required field, assert for known good pdfs
  return SkString();
}

bool SkPdfTrueTypeFontDictionary::has_Subtype() const {
  return get("Subtype", "") != NULL;
}

