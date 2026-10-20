      <p style={{ marginTop: '20px' }}>
        Notice the light gray background? That's the #root div.
        If you inspect the elements, the modal will appear OUTSIDE this div,
        directly inside the body (in #modal-root).
      </p>

      {/* Conditionally render the Modal component */}
      {isModalOpen && (
        <Modal title="My Teleported Modal" onClose={handleCloseModal}>
          {/* Content for the modal */}
          <p>Hello from inside the portal!</p>
          <p>
            Even though this Modal component is written here inside App.js,
            its actual HTML is rendered into the <code>#modal-root</code> div
            in <code>index.html</code>, thanks to <code>createPortal</code>.
          </p>
          <button onClick={handleCloseModal}>Close From Inside</button>
        </Modal>
      )}

      {/* Add some content below where the modal *would* be rendered if not for portals */}
       <div style={{ marginTop: '300px', border: '2px dashed red', padding: '10px'}}>
        This content is lower down in the #root div. The modal appears *above* everything,
        not stuck inside the flow here.
      </div>
    </div>
  );
}

export default App;

      <button onClick={handleOpenModal}>Open Modal</button>
      </p>
        Clicking it will open a modal.
        This button is part of the main application rendered inside #root.
      <p>
      <h1>React Portal Demo App</h1>
    <div>
  return (
