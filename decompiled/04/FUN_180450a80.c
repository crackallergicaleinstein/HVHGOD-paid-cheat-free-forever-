// FUN_180450a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180450a80 */

bool FUN_180450a80(void)

{
  uint *puVar1;
  HMODULE pHVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  LPCSTR lpModuleName;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  char local_68 [16];
  char *local_58;
  longlong lStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  FUN_18015ba30(local_48,"client.dll",10);
  lpModuleName = local_48;
  if (0xf < (ulonglong)local_38._8_8_) {
    lpModuleName = (LPCSTR)local_48._0_8_;
  }
  pHVar2 = GetModuleHandleA(lpModuleName);
  thunk_FUN_18015c010(local_48);
  FUN_180450d60(0,"popup logger resolving CLegacyGameUI; client=0x%p",pHVar2);
  if (pHVar2 == (HMODULE)0x0) {
    FUN_1800a9e50(3,"popup logger cannot resolve client.dll");
    return false;
  }
  local_58 = (char *)0xdb35e39b27e1c185;
  lStack_50 = -0x5fae7e11882a85fa;
  builtin_strncpy(local_68,"CLegacyGameUI",0xe);
  local_68[0xe] = '\0';
  local_68[0xf] = '\0';
  lVar4 = -1;
  do {
    lVar3 = lVar4 + 1;
    lVar10 = lVar4 + 1;
    lVar4 = lVar3;
  } while (local_68[lVar10] != '\0');
  if (lVar3 != 0) {
    local_58 = local_68;
    lStack_50 = lVar3;
    lVar4 = FUN_180453d10(pHVar2,&local_58);
    if ((lVar4 != 0) && ((short)pHVar2->unused == 0x5a4d)) {
      piVar11 = (int *)((longlong)&pHVar2->unused + (longlong)pHVar2[0xf].unused);
      if (*piVar11 == 0x4550) {
        iVar8 = 0;
        if (*(short *)((longlong)piVar11 + 6) != 0) {
          lVar10 = 0;
          do {
            lVar3 = (ulonglong)*(ushort *)(piVar11 + 5) + 0x18 + lVar10 + (longlong)piVar11;
            puVar1 = (uint *)(lVar3 + 8);
            puVar5 = (uint *)thunk_FUN_1805f9970(lVar3,puVar1,".data",5);
            if ((((puVar5 != puVar1) && ((longlong)puVar5 - lVar3 != -1)) ||
                ((puVar5 = (uint *)thunk_FUN_1805f9970(lVar3,puVar1,&DAT_180827f18,4),
                 puVar5 != puVar1 && ((longlong)puVar5 - lVar3 != -1)))) && (8 < *puVar1)) {
              plVar9 = (longlong *)((longlong)&pHVar2->unused + (ulonglong)*(uint *)(lVar3 + 0xc));
              plVar6 = (longlong *)((longlong)plVar9 + ((ulonglong)*puVar1 - 8));
              for (; plVar9 < plVar6; plVar9 = plVar9 + 1) {
                if (*plVar9 == lVar4) goto LAB_180450d17;
              }
            }
            iVar8 = iVar8 + 1;
            lVar10 = lVar10 + 0x28;
          } while (iVar8 < (int)(uint)*(ushort *)((longlong)piVar11 + 6));
        }
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)0x0;
      }
      goto LAB_180450d17;
    }
  }
  plVar9 = (longlong *)0x0;
LAB_180450d17:
  uVar7 = 2;
  if (plVar9 != (longlong *)0x0) {
    uVar7 = 0;
  }
  DAT_180c7df20 = plVar9;
  FUN_180450d60(uVar7,"popup logger RTTI result=0x%p");
  return DAT_180c7df20 != (longlong *)0x0;
}



