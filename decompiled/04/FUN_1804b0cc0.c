// FUN_1804b0cc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b0cc0 */

void * FUN_1804b0cc0(undefined8 param_1,undefined8 param_2,size_t *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  FILE *_File;
  void *_DstBuf;
  size_t sVar5;
  short sVar6;
  int *piVar7;
  size_t _Count;
  
  if (param_3 != (size_t *)0x0) {
    *param_3 = 0;
  }
  _File = (FILE *)FUN_1804b0b10(param_1,&DAT_18081e9a0);
  if (_File == (FILE *)0x0) {
    return (void *)0x0;
  }
  iVar3 = FUN_180619224(_File);
  if ((iVar3 != -1) && (iVar4 = FUN_1806107dc(_File,0,2), iVar4 == 0)) {
    iVar4 = FUN_180619224(_File);
    _Count = (size_t)iVar4;
    if ((iVar4 != -1) &&
       (((iVar3 = FUN_1806107dc(_File,iVar3,0), iVar3 == 0 && (_Count != 0xffffffffffffffff)) &&
        (_DstBuf = (void *)FUN_1804b8110(_Count), _DstBuf != (void *)0x0)))) {
      sVar5 = fread(_DstBuf,1,_Count,_File);
      if (sVar5 == _Count) {
        FUN_1806116f4(_File);
        if (param_3 != (size_t *)0x0) {
          *param_3 = _Count;
        }
        return _DstBuf;
      }
      FUN_1806116f4(_File);
      lVar2 = DAT_180bb8ae8;
      if (DAT_180bb8ae8 != 0) {
        piVar1 = (int *)(DAT_180bb8ae8 + 4);
        piVar7 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
        if (*piVar7 != *piVar1) {
          iVar3 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
          sVar6 = (short)iVar3 + (short)(iVar3 / 6) * -6;
          *(short *)(DAT_180bb8ae8 + 0x2994) = sVar6;
          piVar7 = (int *)(lVar2 + ((longlong)sVar6 + 0x533) * 8);
          *piVar7 = *piVar1;
          piVar7[1] = 0;
        }
        *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
        piVar1 = (int *)(lVar2 + 0x2990);
        *piVar1 = *piVar1 + 1;
      }
      thunk_FUN_180621380(_DstBuf);
      return (void *)0x0;
    }
  }
  FUN_1806116f4(_File);
  return (void *)0x0;
}



