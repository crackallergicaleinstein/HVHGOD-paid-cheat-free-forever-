// FUN_18044bd30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044bd30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18044bd30(void)

{
  HMODULE pHVar1;
  HMODULE pHVar2;
  LPCSTR pCVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  pHVar1 = DAT_180c7dec0;
  if (DAT_180c7dec0 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"client.dll",10);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar1 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar1 != (HMODULE)0x0) {
      DAT_180c7dec0 = pHVar1;
    }
  }
  pHVar2 = DAT_180c7ded0;
  DAT_180c7de70 = pHVar1;
  if (DAT_180c7ded0 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"engine2.dll",0xb);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar2 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar2 != (HMODULE)0x0) {
      DAT_180c7ded0 = pHVar2;
    }
  }
  pHVar1 = DAT_180c7dec8;
  DAT_180c7de08 = pHVar2;
  if (DAT_180c7dec8 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"server.dll",10);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar1 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar1 != (HMODULE)0x0) {
      DAT_180c7dec8 = pHVar1;
    }
  }
  pHVar2 = DAT_180c7de88;
  DAT_180c7de00 = pHVar1;
  if (DAT_180c7de88 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"scenesystem.dll",0xf);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar2 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar2 != (HMODULE)0x0) {
      DAT_180c7de88 = pHVar2;
    }
  }
  pHVar1 = DAT_180c7de80;
  DAT_180c7de18 = pHVar2;
  if (DAT_180c7de80 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"materialsystem2.dll",0x13);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar1 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar1 != (HMODULE)0x0) {
      DAT_180c7de80 = pHVar1;
    }
  }
  pHVar2 = DAT_180c7de98;
  DAT_180c7de10 = pHVar1;
  if (DAT_180c7de98 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"rendersystemdx11.dll",0x14);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar2 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar2 != (HMODULE)0x0) {
      DAT_180c7de98 = pHVar2;
    }
  }
  pHVar1 = DAT_180c7de90;
  DAT_180c7de28 = pHVar2;
  if (DAT_180c7de90 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"panorama.dll",0xc);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar1 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar1 != (HMODULE)0x0) {
      DAT_180c7de90 = pHVar1;
    }
  }
  pHVar2 = DAT_180c7dea8;
  DAT_180bb83c8 = pHVar1;
  if (DAT_180c7dea8 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"gameoverlayrenderer64.dll",0x19);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar2 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar2 != (HMODULE)0x0) {
      DAT_180c7dea8 = pHVar2;
    }
  }
  pHVar1 = DAT_180c7dea0;
  _DAT_180c7de20 = pHVar2;
  if (DAT_180c7dea0 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"schemasystem.dll",0x10);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar1 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar1 != (HMODULE)0x0) {
      DAT_180c7dea0 = pHVar1;
    }
  }
  pHVar2 = DAT_180c7deb8;
  DAT_180c7de38 = pHVar1;
  if (DAT_180c7deb8 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"inputsystem.dll",0xf);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar2 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar2 != (HMODULE)0x0) {
      DAT_180c7deb8 = pHVar2;
    }
  }
  pHVar1 = DAT_180c7deb0;
  DAT_180c7de30 = pHVar2;
  if (DAT_180c7deb0 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"soundsystem.dll",0xf);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar1 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar1 != (HMODULE)0x0) {
      DAT_180c7deb0 = pHVar1;
    }
  }
  pHVar2 = DAT_180c7de48;
  DAT_180c7ddd8 = pHVar1;
  if (DAT_180c7de48 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"tier0.dll",9);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar2 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar2 != (HMODULE)0x0) {
      DAT_180c7de48 = pHVar2;
    }
  }
  pHVar1 = DAT_180c7de40;
  DAT_180c7ddd0 = pHVar2;
  if (DAT_180c7de40 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"particles.dll",0xd);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar1 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar1 != (HMODULE)0x0) {
      DAT_180c7de40 = pHVar1;
    }
  }
  pHVar2 = DAT_180c7de58;
  DAT_180c7dde8 = pHVar1;
  if (DAT_180c7de58 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"resourcesystem.dll",0x12);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar2 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar2 != (HMODULE)0x0) {
      DAT_180c7de58 = pHVar2;
    }
  }
  pHVar1 = DAT_180c7de50;
  DAT_180c63200 = pHVar2;
  if (DAT_180c7de50 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"localize.dll",0xc);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar1 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar1 != (HMODULE)0x0) {
      DAT_180c7de50 = pHVar1;
    }
  }
  pHVar2 = DAT_180c7de68;
  DAT_180c7dde0 = pHVar1;
  if (DAT_180c7de68 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"meshsystem.dll",0xe);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar2 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar2 != (HMODULE)0x0) {
      DAT_180c7de68 = pHVar2;
    }
  }
  pHVar1 = DAT_180c7de60;
  DAT_180c7ddf8 = pHVar2;
  if (DAT_180c7de60 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"filesystem_stdio.dll",0x14);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar1 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar1 != (HMODULE)0x0) {
      DAT_180c7de60 = pHVar1;
    }
  }
  pHVar2 = DAT_180c7de78;
  DAT_180c63230 = pHVar1;
  if (DAT_180c7de78 == (HMODULE)0x0) {
    local_28 = (undefined1  [16])0x0;
    local_18 = (undefined1  [16])0x0;
    FUN_18015ba30(local_28,"vphysics2.dll",0xd);
    pCVar3 = local_28;
    if (0xf < (ulonglong)local_18._8_8_) {
      pCVar3 = (LPCSTR)local_28._0_8_;
    }
    pHVar2 = GetModuleHandleA(pCVar3);
    thunk_FUN_18015c010(local_28);
    if (pHVar2 != (HMODULE)0x0) {
      DAT_180c7de78 = pHVar2;
    }
  }
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] client:              {:#x}";
  DAT_180c7ddf0 = pHVar2;
  FUN_18044c7d0(local_28,&DAT_180c7de70);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] engine2:             {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7de08);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] server:              {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7de00);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] scene_system:        {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7de18);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] material_system2:    {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7de10);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] render_system_dx11:  {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7de28);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] panorama:            {:#x}";
  FUN_18044c7d0(local_28,&DAT_180bb83c8);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] game_overlay:        {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7de20);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] schema_system:       {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7de38);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] input_system:        {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7de30);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] sound_system:        {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7ddd8);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] tier0:               {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7ddd0);
  local_28._0_8_ = "[modules] particles:           {:#x}";
  local_28._8_8_ = 0x24;
  FUN_18044c7d0(local_28,&DAT_180c7dde8);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] resource_system:     {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c63200);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] localize:            {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7dde0);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] mesh_system:         {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7ddf8);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] file_system_stdio:   {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c63230);
  local_28._8_8_ = 0x24;
  local_28._0_8_ = "[modules] vphysics2:           {:#x}";
  FUN_18044c7d0(local_28,&DAT_180c7ddf0);
  if (((((((DAT_180c7de70 == (HMODULE)0x0) || (DAT_180c7de08 == (HMODULE)0x0)) ||
         (DAT_180c7de00 == (HMODULE)0x0)) ||
        ((DAT_180c7de18 == (HMODULE)0x0 || (DAT_180c7de10 == (HMODULE)0x0)))) ||
       ((DAT_180c7de28 == (HMODULE)0x0 ||
        ((DAT_180bb83c8 == (HMODULE)0x0 || (DAT_180c7de38 == (HMODULE)0x0)))))) ||
      (DAT_180c7de30 == (HMODULE)0x0)) ||
     ((((DAT_180c7ddd8 == (HMODULE)0x0 || (DAT_180c7ddd0 == (HMODULE)0x0)) ||
       (DAT_180c7dde8 == (HMODULE)0x0)) ||
      (((DAT_180c63200 == (HMODULE)0x0 || (DAT_180c7dde0 == (HMODULE)0x0)) ||
       ((DAT_180c7ddf8 == (HMODULE)0x0 ||
        ((DAT_180c63230 == (HMODULE)0x0 || (DAT_180c7ddf0 == (HMODULE)0x0)))))))))) {
    return 0;
  }
  return 1;
}



