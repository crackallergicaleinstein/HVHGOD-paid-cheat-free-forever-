// FUN_18061781c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061781c */

undefined8
FUN_18061781c(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *param_1,
             int param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  __uint64 _Var7;
  byte *pbVar8;
  uint uVar9;
  __uint64 _Var10;
  bool bVar11;
  __uint64 local_res8;
  wchar_t *local_res20;
  
  pwVar6 = (wchar_t *)0x0;
  if (param_1[0x3a] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x80);
    *(undefined8 **)(param_1 + 0x80) = puVar2 + 1;
    pwVar6 = (wchar_t *)*puVar2;
    if (pwVar6 == (wchar_t *)0x0) {
      puVar4 = (undefined4 *)FUN_18060fe00();
      *puVar4 = 0x16;
      FUN_18060aad4();
      return 0;
    }
    if (((byte)*param_1 & 1) != 0) {
      *(undefined8 **)(param_1 + 0x80) = puVar2 + 2;
      _Var7 = (__uint64)*(uint *)(puVar2 + 1);
      if (_Var7 == 0) {
        if (((byte)*param_1 & 4) != 0) {
          if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x10)) {
            *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
          }
LAB_1806178b8:
          *pwVar6 = L'\0';
        }
LAB_1806178bc:
        puVar4 = (undefined4 *)FUN_18060fe00();
        *puVar4 = 0xc;
        return 0;
      }
      goto LAB_1806178cd;
    }
  }
  _Var7 = 0xffffffffffffffff;
LAB_1806178cd:
  lVar3 = *(longlong *)(param_1 + 0x40);
  local_res8 = _Var7;
  if ((param_2 != 0) && (_Var7 != 0xffffffffffffffff)) {
    local_res8 = _Var7 - 1;
  }
  lVar5 = 0;
  _Var10 = local_res8;
  local_res20 = pwVar6;
  while( true ) {
    if ((lVar3 != 0) && (lVar5 == lVar3)) goto LAB_1806179c2;
    pbVar8 = *(byte **)(param_1 + 0x18);
    if (pbVar8 == *(byte **)(param_1 + 0x10)) break;
    bVar1 = *pbVar8;
    uVar9 = (uint)bVar1;
    pbVar8 = pbVar8 + 1;
    *(byte **)(param_1 + 0x18) = pbVar8;
    if (param_2 != 0) {
      if (param_2 == 1) {
        if (bVar1 - 9 < 5) goto LAB_1806179a8;
        bVar11 = uVar9 == 0x20;
      }
      else {
        if (param_2 != 8) goto LAB_1806179a8;
        bVar11 = ((byte)param_1[(ulonglong)(bVar1 >> 3) + 0x54] & (byte)(1 << (bVar1 & 7))) == 0;
      }
      if (bVar11) goto LAB_1806179a8;
    }
    if (param_1[0x3a] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0)
    {
      if (_Var10 == 0) {
        if (_Var7 != 0xffffffffffffffff) goto LAB_1806178b8;
        goto LAB_1806178bc;
      }
      bVar11 = __crt_stdio_input::
               input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::write_character
                         (param_1,pwVar6,_Var7,&local_res20,&local_res8,bVar1);
      if (!bVar11) goto LAB_1806179c2;
      _Var10 = local_res8;
    }
    lVar5 = lVar5 + 1;
  }
  uVar9 = 0xffffffff;
LAB_1806179a8:
  if ((pbVar8 != *(byte **)(param_1 + 8)) &&
     ((pbVar8 != *(byte **)(param_1 + 0x10) || (uVar9 != 0xffffffff)))) {
    *(byte **)(param_1 + 0x18) = pbVar8 + -1;
  }
LAB_1806179c2:
  if ((lVar5 == 0) || (((param_2 == 0 && (lVar5 != lVar3)) && (((byte)*param_1 & 4) == 0)))) {
    return 0;
  }
  if ((param_1[0x3a] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0)
     && (param_2 != 0)) {
    *local_res20 = L'\0';
  }
  return 1;
}



