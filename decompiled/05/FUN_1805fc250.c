// FUN_1805fc250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc250 */

_iobuf * FUN_1805fc250(wchar_t *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  _iobuf *p_Var2;
  int iVar3;
  uint uVar4;
  _iobuf *p_Var5;
  uint uVar6;
  
  iVar3 = 0;
  uVar6 = param_2 | 1;
  if ((param_2 & 0x40) == 0) {
    uVar6 = param_2;
  }
  uVar4 = uVar6 | 2;
  if ((uVar6 & 8) == 0) {
    uVar4 = uVar6;
  }
  if (DAT_1808d5fe0 != (uVar4 & 0xffffffbb)) {
    puVar1 = &DAT_1808d5fe0;
    do {
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
      if (puVar1 == (uint *)&DAT_1808d6030) {
        return (_iobuf *)0x0;
      }
    } while (*puVar1 != (uVar4 & 0xffffffbb));
  }
  p_Var2 = common_fsopen<wchar_t>(param_1,(wchar_t *)(&PTR_DAT_18068d130)[iVar3],param_3);
  p_Var5 = (_iobuf *)0x0;
  if (p_Var2 != (_iobuf *)0x0) {
    if (((param_2 & 4) != 0) && (iVar3 = FUN_1806107dc(p_Var2,0,2), iVar3 != 0)) {
      FUN_1806116f4(p_Var2);
      return (_iobuf *)0x0;
    }
    p_Var5 = p_Var2;
  }
  return p_Var5;
}



